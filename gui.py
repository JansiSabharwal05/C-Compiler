import os
import subprocess
import tkinter as tk
from tkinter import filedialog, messagebox, ttk

selected_file = ""

# Outputs for each phase
outputs = {
    "lexical": "",
    "syntax": "",
    "semantic": "",
    "icg": "",
    "cg": "",
}

def browse_file():
    global selected_file
    path = filedialog.askopenfilename(filetypes=[("C files", "*.c")])
    if path:
        selected_file = path
        file_label.config(text=f"Selected File: {os.path.basename(path)}")
        clear_all_outputs()

def clear_all_outputs():
    for key in outputs:
        outputs[key] = ""
    update_all_textboxes()

def run_phase(phase):
    if not selected_file:
        messagebox.showwarning("No File", "Please select a C file first.")
        return

    # Map phase to executable command (adjust paths/names if needed)
    commands = {
        "lexical": ["./Lexical-Analyzer/lexer", selected_file],
        "syntax": ["./Parser/parser", selected_file],
        "semantic": ["./Semantic-Analysis/semantic", selected_file],
        "icg": ["./ICG/a.out", selected_file],
        "cg": ["./codegen", selected_file],
    }

    cmd = commands.get(phase)
    if not cmd:
        messagebox.showerror("Error", f"No command found for phase '{phase}'")
        return

    try:
        result = subprocess.run(cmd, capture_output=True, text=True)

        if result.returncode != 0:
            messagebox.showerror(
                "Execution Failed",
                f"Phase '{phase}' failed:\n{result.stderr}"
            )
            return

        outputs[phase] = result.stdout
        update_all_textboxes()

    except Exception as e:
        messagebox.showerror("Error", str(e))

def update_all_textboxes():
    text_lexical.delete("1.0", tk.END)
    text_lexical.insert(tk.END, outputs["lexical"])

    text_syntax.delete("1.0", tk.END)
    text_syntax.insert(tk.END, outputs["syntax"])

    text_semantic.delete("1.0", tk.END)
    text_semantic.insert(tk.END, outputs["semantic"])

    text_icg.delete("1.0", tk.END)
    text_icg.insert(tk.END, outputs["icg"])

    text_cg.delete("1.0", tk.END)
    text_cg.insert(tk.END, outputs["cg"])

# GUI setup
root = tk.Tk()
root.title("C Compiler Phases GUI")
root.geometry("1100x800")

# File browse
browse_frame = tk.Frame(root)
browse_frame.pack(pady=5, fill='x')

btn_browse = tk.Button(browse_frame, text="Browse .c File", command=browse_file, bg="lightblue")
btn_browse.pack(side=tk.LEFT, padx=10)

file_label = tk.Label(browse_frame, text="Selected File: None")
file_label.pack(side=tk.LEFT, padx=10)

# Phase Buttons Frame
btn_frame = tk.Frame(root)
btn_frame.pack(pady=10)

phases = [
    ("Lexical Analysis", "lexical"),
    ("Syntax Analysis", "syntax"),
    ("Semantic Analysis", "semantic"),
    ("Intermediate Code Gen (ICG)", "icg"),
    ("Code Generation (CG)", "cg"),
]

for (text, phase_key) in phases:
    btn = tk.Button(btn_frame, text=text, width=22, command=lambda p=phase_key: run_phase(p))
    btn.pack(side=tk.LEFT, padx=5)

# Output tabs
tabs = ttk.Notebook(root)
tabs.pack(expand=1, fill='both')

# Lexical tab
tab_lexical = tk.Frame(tabs)
tabs.add(tab_lexical, text="Lexical Output")
text_lexical = tk.Text(tab_lexical, wrap="word")
text_lexical.pack(expand=1, fill='both')

# Syntax tab
tab_syntax = tk.Frame(tabs)
tabs.add(tab_syntax, text="Syntax Output")
text_syntax = tk.Text(tab_syntax, wrap="word")
text_syntax.pack(expand=1, fill='both')

# Semantic tab
tab_semantic = tk.Frame(tabs)
tabs.add(tab_semantic, text="Semantic Output")
text_semantic = tk.Text(tab_semantic, wrap="word")
text_semantic.pack(expand=1, fill='both')

# ICG tab
tab_icg = tk.Frame(tabs)
tabs.add(tab_icg, text="Intermediate Code (ICG)")
text_icg = tk.Text(tab_icg, wrap="word")
text_icg.pack(expand=1, fill='both')

# CG tab
tab_cg = tk.Frame(tabs)
tabs.add(tab_cg, text="Code Generation (CG)")
text_cg = tk.Text(tab_cg, wrap="word")
text_cg.pack(expand=1, fill='both')

root.mainloop()
