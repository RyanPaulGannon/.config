require("conform").setup({
	formatters_by_ft = {
		lua = { "stylua" },
		-- Conform will run multiple formatters sequentially
		-- Use a sub-list to run only the first available formatter
		javascript = { "prettier" },
		typescript = { "prettier" },
		javascriptvue = { "prettier" },
		typescriptvue = { "prettier" },
		css = { "prettier" },
		html = { "prettier" },
		["*"] = { "codespell" },
		["_"] = { "trim_whitespace" },
	},
	format_on_save = {
		async = false,
		timeout_ms = 500,
		lsp_fallback = true,
	},
	notify_on_error = true,
})
