;30h ile 50h adresleri aras�ndaki verilerin en b�y���n� bularak 
;60h adresine yazan program� tasarlay�n�z.

org 0000h
sjmp basla
org 0030h
basla:
	mov A, #00h
	mov 60h,30h  ;dizinin ilk elemani en b�y�k kabul edildi
	mov R0,#31h  ;dizi indisi ikinciden baslandi
tekrar:
	mov A,@R0   ;diziden yeni eleman okundu ve Ak� de tutuldu
	cjne A,60h,esitdegil  ;yeni eleman ile 60h daki (en b�y�k) deger karsilastirildi
	;esit bolgesi. burada yapilacak islem yoksa d�ng� kontrole atlanmali
	sjmp kontrol
esitdegil:
	;esitdegil ise ya buyuktur ya da kucuk bunu Carry(bor�) ile kontrol ederiz
	JC kontrol  ;C varsa yeni deger k���kt�r ki C (bor�) olusmustur
	;elde yok b�lgesi. yeni okunan deger b�y�k. 
	mov 60h,A  ;yeni bulunan b�y�g� 60h adresine kopyaladim

kontrol: ;bir sonraki eleman i�in hazirlik ve d�ng� sonu kontrol�
	inc R0
	cjne R0,#51h,tekrar
	end
