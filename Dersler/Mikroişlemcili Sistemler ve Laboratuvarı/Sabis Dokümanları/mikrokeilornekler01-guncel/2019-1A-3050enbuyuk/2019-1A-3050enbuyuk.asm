;30h ile 50h adresleri aras�ndaki verilerin en b�y���n� 
;bularak 60h adresine yazan program� tasarlay�n�z.
;dizinin adresini de 61h adresine yazsin


	mov 30h,#01h
	mov 31h,#0F8h
	mov 37h,#0F8h
	mov 3ah,#92h
	mov 3fh,#0F4h
	

	MOV 61h,#30H 
	MOV 60h,30h ;ilk elemani en buyuk kabul ettim
	MOV R0,#31H ;dizinin indisini atadim (2. den)
tekrar:
	MOV A,@R0 ;diziden okuma yaptim
	CJNE A,60h, esitdegil
	;esit bolgesi
	MOV 61H,R0	 ;son buldugunun adresini atama
	SJMP dongukontrol
esitdegil:
	JC yenisayikucuk	
	;yenisayi b�y�k b�lgesi
	MOV 60H,A	;yeni b�y�g� atama
	MOV 61H,R0	;yeni b�y�g�n adresini atama
yenisayikucuk:
dongukontrol:
	INC R0
	CJNE R0,#51H,tekrar
	END
	