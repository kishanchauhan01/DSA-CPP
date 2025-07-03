import os

parent_directroy = "./"

for root, dirs, files in os.walk(parent_directroy):
    for file in files:
        if file.endswith(".exe"):
            file_path = os.path.join(root, file)
            try: 
                os.remove(file_path)
                print(f"file deleted: {file_path}")
            except Exception as e:
                print(f"error deleting {file_path}: {e}")

print("Deletion process completed.")
