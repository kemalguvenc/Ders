;30h ile 50h adresleri aras�ndaki verilerin toplam�n� bulan program�:
;a. elde olu�mad��� d���nerek, sonucunu 60h adresine,
;b. elde olu�tu�unu d���nerek, sonucun y�ksek bayt�n� 60h adresine, 
;d���k bayt�n� 61h adresine yazacak �ekilde tasarlay�n�z.
org 0000h
sjmp basla
org 0030h
basla:
	mov 30h,#01h
	mov 31h,#02h
	mov 37h,#08h
	mov 3ah,#02h
	mov 3fh,#04h

	MOV R0,#30H ;dizinin indisini atadim
	MOV A,#00H ;ak�y� sifirladim
	MOV 60H,#00H ;toplamin y�ksek byte sifirladim
topla:	
	ADD A,@R0 ;diziden okuma ve toplama
	JNC eldeyok
	;elde var
	INC 60H
eldeyok:
	INC R0
	CJNE R0,#51H,topla ;d�ng� kontrol�
	MOV 61H,A ;toplamin d�s�k byte i 61h a aktar
	END






