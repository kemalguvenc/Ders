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
tekrar:	
	MOV A,@R0 ;veriyi aldim
	CJNE A,#00h,devamet
	SJMP ucunkatidegil
devamet:
	MOV B,#03h ;3'e b�lecegim
	DIV AB ;kalan 0 degilse 3 kati degil
	MOV A,B
	CJNE A,#00h,ucunkatidegil	 
	;3 kati b�lgesi
	MOV A,@R0	
	MOV @R1,A ;3 kati olani hedefe atadim
	INC R1
ucunkatidegil:
	INC R0
	CJNE R0,#50H,tekrar
	DEC R1		;1 fazlasi oldugu icin 1 azalttim
	MOV 71H,R1 ;3 e b�l�nenlerin sayisi
;3 e b�l�nenlerin en b�y�g�n� bulma
	INC 71h ;sayac kontrol� icin 
	MOV 70H,50H ;ilk elemani en b�y�k kabul ettim
	MOV R1,#51h
tekrar2:	
	MOV A,@R1
	CJNE A,70H,esitdegil
esitdegil:
	JC yenisayikucuk
	MOV B,#03h
	DIV AB
	MOV 70h,A
yenisayikucuk: 
   	DJNZ 71h,tekrar2
	END

