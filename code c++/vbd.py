import tkinter as tk

def search_entries(keyword):
    results = []
    for i, entry in enumerate(entry_list):
        if keyword.lower() in entry.get().lower():
            results.append(i)
    return results

def on_key_press(event):
    if event.keysym == 'f':
        keyword = search_entry.get()
        results = search_entries(keyword)
        if results:
            message_label.config(text=f"Found in entries: {results}")
        else:
            message_label.config(text="No matches found")

root = tk.Tk()
root.title("Search Tool")

# Tạo danh sách các ô nhập liệu
entry_list = []
for _ in range(4):  # Thêm 4 ô nhập liệu
    entry = tk.Entry(root, width=50)
    entry.pack(pady=5)
    entry_list.append(entry)

search_entry = tk.Entry(root, width=50)
search_entry.pack(pady=20)
search_entry.insert(0, "Enter keyword to search")

message_label = tk.Label(root, text="")
message_label.pack(pady=20)

root.bind('<KeyPress-f>', on_key_press)

root.mainloop()
