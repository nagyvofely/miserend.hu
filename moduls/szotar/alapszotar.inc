<?

function alapnyelv($txt) {
   switch($txt) {


//�ltal�nos
    case 'title' : $tmp = 'VPP - Virtu�lis Pl�b�nia Port�l'; break;
    case "Tov�bbi inform�ci�k:":  $tmp = ""; break;
    case "Mehet":  $tmp = ""; break;
    case "Let�lt�s":  $tmp = ""; break;
    case 'top' : $tmp = 'oldal tetej�re'; break;

    case '' : $tmp = ''; break;
    case '' : $tmp = ''; break;
    case '' : $tmp = ''; break;
    case '' : $tmp = ''; break;

//F�men�  (adatb�zis alapj�n)
    case "igenapt�r":  $tmp = "Ige- �s liturgikus napt�r"; break;
    case "visszajelz�s":  $tmp = "Visszajelz�s"; break;
    case "f�oldal":  $tmp = "F�oldal"; break;
    case "magunkr�l":  $tmp = "Magunkr�l"; break;
    case "m�soraink":  $tmp = "M�soraink"; break;
    case "r�di�m�sor":  $tmp = "R�di�m�sor"; break;
    case "hallgat�s":  $tmp = "Hallgat�s"; break;
    case "cikkek, h�rek":  $tmp = "Cikkek, h�rek"; break;
    case "h�rlev�l":  $tmp = "H�rlev�l"; break;
    case 'inform�ci�k': $tmp = 'Inform�ci�k'; break;
    case 'aktu�lis m�sor': $tmp = 'Aktu�lis m�sor'; break;
    case 'aktu�lis h�rek': $tmp = 'Aktu�lis h�rek'; break;

    //Balmen�k
    case "Magunkr�l":  $tmp = "Magunkr�l"; break;
    case "Munkat�rsaink":  $tmp = "Munkat�rsaink"; break;
    case "V�teli lehet�s�gek":  $tmp = "V�teli lehet�s�gek"; break;
    case "":  $tmp = ""; break;
    case "":  $tmp = ""; break;

//Szavaz�s
    case "Szavazok":  $tmp = "Szavazok"; break;
    case "szavazat":  $tmp = "szavazat"; break;
    case "Eredm�ny megtekint�se":  $tmp = "Eredm�ny megtekint�se"; break;
    case "":  $tmp = ""; break;

//Keres�
    case 'Kulcssz�' : $tmp = 'Kulcssz�'; break;
    case 'Keres�s az al�bbi kateg�ri�ban' : $tmp = 'Keres�s az al�bbi kateg�ri�ban'; break;
    case 'Keres�s' : $tmp = 'Keres�s'; break;
    case "programok":  $tmp = "programok"; break;
    case "szentek":  $tmp = "szentek"; break;
    case "gondolatok":  $tmp = "gondolatok"; break;
    case "biblia":  $tmp = "biblia"; break;
    case "munkat�rsak":  $tmp = "munkat�rsak"; break;


//Sz�nek
    case 'feher' : $tmp = 'feh�r'; break;
    case 'piros' : $tmp = 'piros'; break;
    case 'zold' : $tmp = 'z�ld'; break;
    case 'lila' : $tmp = 'lila'; break;


//Beoszt�sok
    case "":  $tmp = ""; break;
    case "":  $tmp = ""; break;
    case "":  $tmp = ""; break;
    case "":  $tmp = ""; break;
    case "":  $tmp = ""; break;

//M�sorok (ak�r c�mek, alc�mek)
    case "Kateg�ria:":  $tmp = "Kateg�ria:"; break;
    case "A m�sort k�sz�ti:":  $tmp = "A m�sort k�sz�ti:"; break;
    case "":  $tmp = ""; break;
    case "":  $tmp = ""; break;
    case "":  $tmp = ""; break;

//Szervezeti egys�gek (szervezetek t�bla)
    case "":  $tmp = ""; break;
    case "":  $tmp = ""; break;

  //Sorsz�mok     
    case "ssz1":  $tmp = "els�"; break;
    case "ssz2":  $tmp = "m�sodik"; break;
    case "ssz3":  $tmp = "harmadik"; break;
    case "ssz4":  $tmp = "negyedik"; break;
    case "ssz5":  $tmp = "�t�dik"; break;
    case "ssz6":  $tmp = "hatodik"; break;
    case "":  $tmp = ""; break;
    case "":  $tmp = ""; break;
    case "":  $tmp = ""; break;
    case "":  $tmp = ""; break;
    case "":  $tmp = ""; break;
    case "":  $tmp = ""; break;
    case "":  $tmp = ""; break;
    case "":  $tmp = ""; break;
    case "":  $tmp = ""; break;
    

//Nyelvek
    case "hu":  $tmp = "magyar"; break;
    case "en":  $tmp = "angol"; break;
    case "de":  $tmp = "n�met"; break;
    case "fr":  $tmp = "francia"; break;
    case "it":  $tmp = "olasz"; break;
    case "cz":  $tmp = "cseh"; break;
    case "sk":  $tmp = "szlov�k"; break;
    case "si":  $tmp = "szlov�n"; break;
    case "hr":  $tmp = "horv�t"; break;
    case "pl":  $tmp = "lengyel"; break;
    case "ba":  $tmp = "szerb"; break;

//Orsz�gok
    case "Ausztria":  $tmp = ""; break;
    case "Belgium":  $tmp = ""; break;
    case "Bulg�ria":  $tmp = ""; break;
    case "Ciprus":  $tmp = ""; break;
    case "Cseh K�zt�rsas�g":  $tmp = ""; break;
    case "D�nia":  $tmp = ""; break;
    case "�sztorsz�g":  $tmp = ""; break;
    case "Finnorsz�g":  $tmp = ""; break;
    case "Franciaorsz�g":  $tmp = ""; break;
    case "N�metorsz�g":  $tmp = ""; break;
    case "G�r�gorsz�g":  $tmp = ""; break;
    case "Magyarorsz�g":  $tmp = ""; break;
    case "Olaszorsz�g":  $tmp = ""; break;
    case "�rorsz�g":  $tmp = ""; break;
    case "Izland":  $tmp = ""; break;
    case "Lettorsz�g":  $tmp = ""; break;
    case "Liechtenstein":  $tmp = ""; break;
    case "Luxemburg":  $tmp = ""; break;
    case "Litv�nia":  $tmp = ""; break;
    case "M�lta":  $tmp = ""; break;
    case "Hollandia":  $tmp = ""; break;
    case "Norv�gia":  $tmp = ""; break;
    case "Lengyelorsz�g":  $tmp = ""; break;
    case "Portug�lia":  $tmp = ""; break;
    case "Rom�nia":  $tmp = ""; break;
    case "Szlov�kia":  $tmp = ""; break;
    case "Szlov�nia":  $tmp = ""; break;
    case "Spanyolorsz�g":  $tmp = ""; break;
    case "Sv�dorsz�g":  $tmp = ""; break;
    case "Egyes�lt Kir�lys�g":  $tmp = ""; break;
    case "T�r�korsz�g":  $tmp = ""; break;
    case "Sv�jc":  $tmp = ""; break;
    case "Bosznia-Hercegovina":  $tmp = ""; break;
    case "Amerikai Egyes�lt �llamok (USA)":  $tmp = ""; break;
    case "Kanada":  $tmp = ""; break;
    case "Braz�lia":  $tmp = ""; break;
    case "Jap�n":  $tmp = ""; break;
    case "Argent�na":  $tmp = ""; break;
    case "K�na":  $tmp = ""; break;
    case "Mong�lia":  $tmp = ""; break;
    case "Ausztr�lia":  $tmp = ""; break;
    case "Mexik�":  $tmp = ""; break;
    case "Egyiptom":  $tmp = ""; break;
    case "Izrael":  $tmp = ""; break;
    case "Ukrajna":  $tmp = ""; break;
    case "Egy�b":  $tmp = ""; break;

//H�napok
    case "ho1":  $tmp = "janu�r"; break;
    case "ho2":  $tmp = "febru�r"; break;
    case "ho3":  $tmp = "m�rcius"; break;
    case "ho4":  $tmp = "�prilis"; break;
    case "ho5":  $tmp = "m�jus"; break;
    case "ho6":  $tmp = "j�nius"; break;
    case "ho7":  $tmp = "j�lius"; break;
    case "ho8":  $tmp = "augusztus"; break;
    case "ho9":  $tmp = "szeptember"; break;
    case "ho01":  $tmp = "janu�r"; break;
    case "ho02":  $tmp = "febru�r"; break;
    case "ho03":  $tmp = "m�rcius"; break;
    case "ho04":  $tmp = "�prilis"; break;
    case "ho05":  $tmp = "m�jus"; break;
    case "ho06":  $tmp = "j�nius"; break;
    case "ho07":  $tmp = "j�lius"; break;
    case "ho08":  $tmp = "augusztus"; break;
    case "ho09":  $tmp = "szeptember"; break;
    case "ho10":  $tmp = "okt�ber"; break;
    case "ho11":  $tmp = "november"; break;
    case "ho12":  $tmp = "december"; break;

//Napok
    case "h�tf�":  $tmp = "h�tf�"; break;
    case "kedd":  $tmp = "kedd"; break;
    case "szerda":  $tmp = "szerda"; break;
    case "cs�t�rt�k":  $tmp = "cs�t�rt�k"; break;
    case "p�ntek":  $tmp = "p�ntek"; break;
    case "szombat":  $tmp = "szombat"; break;
    case "vas�rnap":  $tmp = "vas�rnap"; break;
    
    case "nap1":  $tmp = "h�tf�"; break;
    case "nap2":  $tmp = "kedd"; break;
    case "nap3":  $tmp = "szerda"; break;
    case "nap4":  $tmp = "cs�t�rt�k"; break;
    case "nap5":  $tmp = "p�ntek"; break;
    case "nap6":  $tmp = "szombat"; break;
    case "nap0":  $tmp = "vas�rnap"; break;

    case "napon1":  $tmp = "h�tf�n"; break;
    case "napon2":  $tmp = "kedden"; break;
    case "napon3":  $tmp = "szerd�n"; break;
    case "napon4":  $tmp = "cs�t�rt�k�n"; break;
    case "napon5":  $tmp = "p�nteken"; break;
    case "napon6":  $tmp = "szombaton"; break;
    case "napon0":  $tmp = "vas�rnap"; break;

    case "n1":  $tmp = "H"; break;
    case "n2":  $tmp = "K"; break;
    case "n3":  $tmp = "Sze"; break;
    case "n4":  $tmp = "CS"; break;
    case "n5":  $tmp = "P"; break;
    case "n6":  $tmp = "Szo"; break;
    case "n0":  $tmp = "V"; break;

    default: $tmp = $txt; break;
    }
    
    if(empty($tmp)) $tmp=$txt;
    
    return $tmp;
}

?>
