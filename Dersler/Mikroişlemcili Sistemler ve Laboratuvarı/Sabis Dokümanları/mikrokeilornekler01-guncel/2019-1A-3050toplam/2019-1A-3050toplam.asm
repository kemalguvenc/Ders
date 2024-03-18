;30h ile 50h adresleri arasýndaki verilerin toplamýný bulan programý:
;a. elde oluþmadýðý düþünerek, sonucunu 60h adresine,
;b. elde oluþtuðunu düþünerek, sonucun yüksek baytýný 60h adresine, 
;düþük baytýný 61h adresine yazacak þekilde tasarlayýnýz.

	mov 30h,#01h
	mov 31h,#0F2h
	mov 37h,#0F8h
	mov 3ah,#92h
	mov 3fh,#0F4h

	MOV R0,#30H ;dizinin indisini atadim
	MOV A,#00h ;toplam degiskenini sifirladim
	MOV 60h,#00h ;toplamin yuksek byte sifirladim
topla:
	ADD A,@R0 ;toplama islemi
	JNC atla
	;elde var bölgesi
	INC 60h		   ;eldeyi 60h adresine ekledim
atla:
	INC R0
	CJNE R0,#51h,topla
	MOV 61h,A
	end
