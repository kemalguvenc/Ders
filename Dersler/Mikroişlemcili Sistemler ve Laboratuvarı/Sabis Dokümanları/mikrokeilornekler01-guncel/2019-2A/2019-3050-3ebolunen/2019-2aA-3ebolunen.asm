;30h ile 4Fh adresleri aras�ndaki verilerden 3��n katlar� olanlar� 
;50h adresinden itibaren kopyalayan ve yeni olu�an dizinin 
;en b�y�k eleman�n�n 3��n ka� kat� oldu�unu 70h adresine kaydeden program� yaz�n�z.
;3 e b�l�nenlerin sayisi 71h da olsun
	mov 30h,#03h
	mov 31h,#02h
	mov 37h,#09h
	mov 3ah,#09h
	mov 3fh,#04h
	MOV R0,#30H ;kaynak dizinin indisini atadim
	MOV R1,#50H ;hedef dizinin indisi
	MOV 71H,#00H ;3 kati frekansi
tekrar:
	MOV A,@R0 ;kaynaktan okuma
	CJNE A,#00H,atla ;0 ise alma
	LJMP ucunkatidegil
atla:
	MOV B,#03H ;3 bolunecek
	DIV AB 
	MOV A,B
	CJNE A,#00H,ucunkatidegil
	;3 �n kati b�lgesi
	MOV A,@R0 ;yeniden oku
	MOV @R1,A ;yeni diziye aktar
	INC 71H
	INC R1
ucunkatidegil:
	INC R0
	CJNE R0,#50H,tekrar
	
	MOV R5,50H
	MOV R1,#51H
tekrar2:
	MOV A,@R1
	CJNE A,70H,esitdegil
	LJMP dongukontrol
esitdegil:
	JC dongukontrol
	;yeni sayi b�y�k
	MOV R5,A
	MOV B,#03H
	DIV AB
	MOV 70H,A
dongukontrol:
	INC R1
	DJNZ 71H,tekrar2

	END




