<?

function alapnyelv($txt) {
   switch($txt) {


//�ltal�nos
    case 'title' : $tmp = 'MKR - Magyar Katolikus R�di�'; break;
    case "Tov�bbi inform�ci�k:":  $tmp = ""; break;
    case "Mehet":  $tmp = ""; break;
    case "Let�lt�s":  $tmp = ""; break;

//F�men�  (adatb�zis alapj�n)
    case "igenapt�r":  $tmp = "Ige- �s liturgikus napt�r"; break;
    case "visszajelz�s":  $tmp = "Visszajelz�s"; break;
    case "f�oldal":  $tmp = "Home"; break;
    case "magunkr�l":  $tmp = "About us"; break;
    case "m�soraink":  $tmp = "M�soraink"; break;
    case "r�di�m�sor":  $tmp = "R�di�m�sor"; break;
    case "hallgat�s":  $tmp = "Hallgat�s"; break;
    case "h�rek":  $tmp = "News"; break;
    case "h�rlev�l":  $tmp = "Newsletter"; break;

//Modulok men�pontjai
  //     #29 Imal�nc
    case "imal�nc inform�ci�k":  $tmp = ""; break;
    case "p�sp�ki k�sz�nt�":  $tmp = ""; break;
    case "a kezdem�nyez�sr�l":  $tmp = ""; break;
    case "hogyan �p�l fel?":  $tmp = ""; break;
    case "az im�ds�g form�ja":  $tmp = ""; break;
    case "felaj�nl� ima":  $tmp = ""; break;

  //     #35 Let�lt�s (Zar�ndok-imal�nc)
    case "let�lthet� anyagok":  $tmp = ""; break;
    case "imal�nc-sz�r�lapok":  $tmp = ""; break;
    case "imal�nc-k�rlev�l":  $tmp = ""; break;

  //     #27 zar�ndok
    case "zar�ndok oldal":  $tmp = ""; break;
    case "bemutatkoz�s":  $tmp = ""; break;
    case "kegyhelyek":  $tmp = ""; break;
    case "�zenetek":  $tmp = ""; break;
    case "engesztel�s":  $tmp = ""; break;

  //     #32 testv�roldalak
    case "testv�roldalak":  $tmp = ""; break;
    case "KeKT":  $tmp = ""; break;
    case "Zar�ndok":  $tmp = ""; break;
    case "imperfectum":  $tmp = ""; break;
    case "Virtu�lis Pl�b�nia":  $tmp = ""; break;
    
  //     #36 im�dkoz�k
    case "im�dkoz�k":  $tmp = ""; break;
    case "k�z�ss�gek":  $tmp = ""; break;
    case "v�lem�nyek":  $tmp = ""; break;

  //     #
    case "":  $tmp = ""; break;
    case "":  $tmp = ""; break;
    case "":  $tmp = ""; break;
    case "":  $tmp = ""; break;
    case "":  $tmp = ""; break;
    case "":  $tmp = ""; break;
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
    case "janu�r":  $tmp = ""; break;
    case "febru�r":  $tmp = ""; break;
    case "m�rcius":  $tmp = ""; break;
    case "�prilis":  $tmp = ""; break;
    case "m�jus":  $tmp = ""; break;
    case "j�nius":  $tmp = ""; break;
    case "j�lius":  $tmp = ""; break;
    case "augusztus":  $tmp = ""; break;
    case "szeptember":  $tmp = ""; break;
    case "okt�ber":  $tmp = ""; break;
    case "november":  $tmp = ""; break;
    case "december":  $tmp = ""; break;

    case "ho1":  $tmp = ""; break;
    case "ho2":  $tmp = ""; break;
    case "ho3":  $tmp = ""; break;
    case "ho4":  $tmp = ""; break;
    case "ho5":  $tmp = ""; break;
    case "ho6":  $tmp = ""; break;
    case "ho7":  $tmp = ""; break;
    case "ho8":  $tmp = ""; break;
    case "ho9":  $tmp = ""; break;
    case "ho10":  $tmp = ""; break;
    case "ho11":  $tmp = ""; break;
    case "ho12":  $tmp = ""; break;

//Napok
    case "h�tf�":  $tmp = ""; break;
    case "kedd":  $tmp = ""; break;
    case "szerda":  $tmp = ""; break;
    case "cs�t�rt�k":  $tmp = ""; break;
    case "p�ntek":  $tmp = ""; break;
    case "szombat":  $tmp = ""; break;
    case "vas�rnap":  $tmp = ""; break;

    default: $tmp = $txt; break;
    }
    
    if(empty($tmp)) $tmp=$txt;
    
    return $tmp;
}

?>
