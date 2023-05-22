local keymap = vim.keymap

vim.g.mapleader = " "
keymap.set("n", "<leader>pv", vim.cmd.Ex)

-- windows
keymap.set("n", "<S-n>", ":tabnew<CR>")
keymap.set("n", "<S-t>", ":tabn<CR>")
keymap.set("n", "<S-b>", ":tabp<CR>")
keymap.set("n", "<S-c>", ":tabclose<CR>")
