;30h ile 50h adresleri aras�ndaki verilerin en b�y���n� 
;bularak 60h adresine yazan program� tasarlay�n�z.
;dizinin adresini de 61h adresine yazsin


	mov 30h,#01h
	mov 31h,#0F8h
	mov 37h,#0F8h
	mov 3ah,#92h
	mov 3fh,#0F4h
	
	MOV 61H,#01H ;frekans sayisi resetleme
	MOV 60H,30H ;dizinin ilk elemani en b�y�k
	MOV R0,#31H ;dizinin indisi
tekrar:
	MOV A,@R0 ;dizi okuma
	CJNE A,60H,esitdegil
	;esit b�lgesi
	INC 61H ;frekansi bir artir
	SJMP dongukontrol
esitdegil:
	JC yenisayikucuk
	;yeni sayi b�y�k b�lgesi
	MOV 60H,A  ;yeni en b�y�k aktardim
	MOV 61H,#01H; frekansi resetledim
yenisayikucuk:
dongukontrol:
	INC R0
	CJNE R0,#51H,tekrar

	END




