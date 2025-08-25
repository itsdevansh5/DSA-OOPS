import os

def list_folders(path='.'):
    folders = [f for f in os.listdir(path) if os.path.isdir(os.path.join(path, f)) and not f.startswith('.')]
    return folders

with open("readme.md", "w") as f:
    f.write("# C++ DSA & OOP Concepts Learned\n\n")
    f.write("## Concepts covered:\n\n")
    folders = list_folders()
    for folder in folders:
        f.write(f"- {folder}\n")
