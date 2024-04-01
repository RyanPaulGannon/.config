local keymap = vim.keymap

keymap.set("n", "T", vim.cmd.Ex)
keymap.set("n", "<C-w>", ":w<CR>")

-- Buffers
keymap.set("n", "<leader>bd", vim.cmd.bdelete)
keymap.set("n", "<leader>bn", vim.cmd.bnext)
keymap.set("n", "<leader>bp", vim.cmd.bprevious)

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
local function showFugitiveGit()
	if vim.fn.FugitiveHead() ~= "" then
		vim.cmd([[
    Git
    " wincmd H  " Open Git window in vertical split
    " setlocal winfixwidth
    " vertical resize 31
    " setlocal winfixwidth
    setlocal nonumber
    setlocal norelativenumber
    ]])
	end
end

local function toggleFugitiveGit()
	if vim.fn.buflisted(vim.fn.bufname("fugitive:///*/.git//$")) ~= 0 then
		vim.cmd([[ execute ":bdelete" bufname('fugitive:///*/.git//$') ]])
	else
		showFugitiveGit()
	end
end

keymap.set("n", "<leader>gs", toggleFugitiveGit)
keymap.set("n", "<leader>gc", [[:Git commit -v<CR>:startinsert<CR>]], { noremap = true, silent = true })
keymap.set("n", "<leader>gp", [[:Git push<CR>]], { noremap = true, silent = true })
