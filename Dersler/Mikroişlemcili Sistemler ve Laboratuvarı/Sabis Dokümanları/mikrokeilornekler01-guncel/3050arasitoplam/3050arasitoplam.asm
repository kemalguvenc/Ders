;30h ile 50h adresleri aras�ndaki verilerin toplam�n� bulan program�:
;a. elde olu�mad��� d���nerek, sonucunu 60h adresine,
;b. elde olu�tu�unu d���nerek, sonucun y�ksek bayt�n� 60h adresine, 
;   d���k bayt�n� 61h adresine yazacak �ekilde tasarlay�n�z.

;a secenegi
//org 0000h
//sjmp basla
//org 0030h
//basla:
//	mov R0,#30h  ;dizinin ilk elemaninin indisini y�kledim
//	mov A, #00h ; toplami ak�m�lat�rde tutacagim icin resetledim
//topla:
//	add A,@R0 ;ilk elemani ak� ile topladim
//	inc R0	  ;bir sonraki eleman icin indisi 1 artirdim
//	cjne R0,#51h,topla	; dizinin son elemani 50h oldugu icin 51h ile karsilastirdim
//	mov 60h, A	 ; ak�y� 60h adresine kopyaladim
//end


;b secenegi
org 0000h
sjmp basla
org 0030h
basla:
	mov R0,#30h  ;dizinin ilk elemaninin indisini y�kledim
	mov A, #00h ; toplami ak�m�lat�rde tutacagim icin resetledim
	mov 60h,#00h ;y�ksek byte sifirlandi
topla:
	add A,@R0 ;ilk elemani ak� ile topladim
	jnc eldeyok
	inc 60h   ; elde varsa 60h bir artirilir, yoksa artirmadan asagiya gecer
eldeyok:
	inc R0    ;bir sonraki eleman icin indisi 1 artirdim
	cjne R0,#51h,topla  ; dizinin son elemani 50h oldugu icin 51h ile karsilastirdim
	mov 61h, A   ; ak�y� 61h adresine kopyaladim
end