local keymap = vim.keymap

vim.g.mapleader = " "

keymap.set("n", "E", vim.cmd.Ex)
keymap.set("n", "<C-w>", ":w<CR>")

-- Yank to system clipboard
keymap.set({ "n", "v" }, "<leader>y", [["+y]])
keymap.set("n", "<leader>Y", [["+Y]])

-- Undo Tree
keymap.set("n", "<leader>u", vim.cmd.UndotreeToggle)

-- Clear highlighting
keymap.set("n", "<leader>c", ":nohl<CR>", { silent = true })

-- Trouble
keymap.set("n", "<leader>t", vim.cmd.TroubleToggle)

-- Fugitive
keymap.set("n", "<leader>gs", vim.cmd.Git)
