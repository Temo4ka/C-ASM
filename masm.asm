
.model flat, C

;------------------------------------------------

printf          proto fmtStr: ptr, args: vararg

;------------------------------------------------
.data

PrintfStr       db "ASM_PART:", 0dh, 0ah, 0

;------------------------------------------------
.code

SubFunc         proc

                invoke printf, offset PrintfStr

                ret

SubFunc         endp

;--------------------------------------------------

end
