;; add a load-path
(add-to-list 'load-path "~/elisp")

;;关闭emacs启动时的画面
(setq inhibit-startup-message t)

;; 改变 Emacs 固执的要你回答 yes 的行为。按 y 或空格键表示 yes，n 表示 no。
(fset 'yes-or-no-p 'y-or-n-p)

;; set cursor type to bar
(setq-default cursor-type 'bar)

;; 不生成临时文件
(setq-default make-backup-files nil)

;; 不显示工具栏(仅对GUI方式启动有效)
(when (display-graphic-p)
  (tool-bar-mode -1))
  

;; C-x C-b：在当前窗口显示BufferList而不是新开一个窗口
(global-set-key "\C-x\C-b" 'buffer-menu)

;; 打开.txt文件自动进入org模式
(add-to-list 'auto-mode-alist
             '("\\.txt\\'" . (lambda ()
			       ;; add major mode setting here, if needed, for example:
                               ;; (text-mode)
			       (org-mode))))

;; 改善dired中的文件大小的可读性
(setq dired-listing-switches "-alh") 


;; 加载额外的软件包
(require 'redo+)


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;
;; Key bindings
;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(global-set-key [?\C-z] 'undo)
(global-set-key [?\C-y] 'redo)

