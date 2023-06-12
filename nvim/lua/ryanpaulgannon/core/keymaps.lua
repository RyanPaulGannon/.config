local keymap = vim.keymap

vim.g.mapleader = " "

keymap.set("n", "<leader>pv", vim.cmd.Ex) 

-- Tree Toggle
keymap.set("n", "<leader>e", ":Neotree toggle<CR>")

-- Yank to system clipboard
keymap.set("n", "<leader>y", "\"+y")

-- Which Key
keymap.set('n', '<leader>', "<cmd>WhichKey '<Space>'<CR>", { silent = true })

-- Tabnine

-- Git
keymap.set("n", "<leader>gs", vim.cmd.Git)

-- Undotree
keymap.set("n", "<leader>u", vim.cmd.UndotreeToggle)

