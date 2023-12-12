local keymap = vim.keymap

vim.g.mapleader = " "

keymap.set("n", "E", vim.cmd.Ex)
keymap.set("n", "<C-s>", ":w<CR>")

-- Yank to system clipboard
keymap.set({ "n", "v" }, "<leader>y", [["+y]])
keymap.set("n", "<leader>Y", [["+Y]])

-- Undo Tree
keymap.set("n", "<leader>u", vim.cmd.UndotreeToggle)
