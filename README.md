# SisteminisProg

**Realese'as v0.1**
Pirma programos versija.
Viena iš sudetingiausių ir daugiausiai laiko užėmusių užduočiu, nes reikėjo viską programos pagrindą sukurti šioje versijoje.

Programa nuskaido pradinius duomenys kaip **vardą** ir **pavarde**,**n** atliktų namų darbų rezultatus ir egazamino rezultatą.
iš šių duomenų yra apskaičiuojas galutinis vertinimas pagal formule arba pagal medianą.
Yra galimybė duomenis įvesti programiškai(Pagal klasę), įvesti vartotojo terminale, arba duomenys nuskaityti iš failo.
Pradinė teksto skaitymo realizacija buvo neoptimizuotą.

Tolimėsnės versijos palaiko tokį pat principa tik yra patobulinimu.

be to. Nėra exeption handling. Bandžiau domėtis savarankiškai kaip tai reikai pritaikyti, bet iškilo sunkumų.

**Realese'as v0.2**
Svarbiausias šio realese'o uždavinys buvo didelių failų skaitymas ir analizavimas. Ankstesnėje versijoje failų skaitymas buvo labai lėtas, programa negalėjo susidoroti su 10000 duomenų failais. Tyrimus reikėjo atlikti su 10000, 100000 ir 1000000 duomenų failais. 
Patobulinau duomenų skaityma naudojant stringstream klasės objektą ir ištestavau programos greitį.

Rezultatai: 

irbant su **10000** duomenų:

Failų sukurimas užtruko: 0.0006901 sekundės.
Duomenų nuskaitymas užtruko: 0.0471961 sekundės.
Studentu surušiavimas ir išvedimas užtruko: 0.0167767 sekundės.

iš viso: **0.0639728 sekundės.**
--------------------------------------------------------------------------------

Dirbant su **100000** duomenų:

Failų sukurimas užtruko: 0.0006443 sekundės.
Duomenų nuskaitymas užtruko: 0.545715 sekundės.
Studentu surušiavimas ir išvedimas užtruko: 0.153916 sekundės.

iš viso: **0.699631 sekundės.**

--------------------------------------------------------------------------------

Dirbant su **1000000** duomenų:

Failų sukurimas užtruko: 0.0007263 sekundės.
Duomenų nuskaitymas užtruko: 4.27373 sekundės.
Studentu surušiavimas ir išvedimas užtruko: 1.55854 sekundės.

iš viso: **5.8329963 sekundės.**

**Realese'as v1.0**
Pagrindinė šio Realese'o užduotis buvo ištestuoti programos veikimo greitį pagal 2 strategijas naudojant skirtingus konteinerius: **std::vector, std::list, std::deque**
Tyrimas buvo atliktas pusiau, bei buvo optimizuota failų skaitymo funkcija: 

Rezultatai:

1 Strategija(Mano programa turimus duomenis surenka ir išskaido į eilutes kurios atsiduria stringstream objekte. duomenys tuo metu yra apdirbami funkcijų ir išskaidomi į du atskirus failus.): 

Testas atliktas naudojant 1000000 duomenų.

**std::vector:** 

duomenų nuskaitymą iš failų: 4.27373 sekundės.
studentų rūšiavimą į dvi grupes/kategorijas: 1.55854 sekundės.
Naujų failų sukūrimą: 0.0007263 sekundės.

**std::list:**

Duomenų nuskaitymas iš failų: 4,54253 sekundės.
Studentų rūšiavimas į dvi grupes: 2,18196 sekundės.
Naujų failų sukūrimas: 0,0006989 sekundės.

**std::deque:**

Duomenų nuskaitymas iš failų: 4,16784 sekundės.
Studentų rūšiavimas į dvi grupes: 1,79232 sekundės.
Naujų failų sukūrimas: 0,0007492 sekundės.

2 Strategija: 

Dabartinė funkcija išskaido failą eilutėmis ir iš eilučiu duomenų atlieka priskirtus veiksmus (atskiria vardas/pavarde, atrenka pažymius ir egzaminą.) ir išskaido
į du atskirus failus bei konteinerius. Norint išskaidyt "vargšiukus" ir palikti "kietiakus" pradiniame konteinerį aš turėčiau perkurti visą funkciją, kad
apskaičiuoti duomenys būtų supilti į vieną konteinerį ir iš jo atrinkti duomenys būtų perkelti į "varkšiukus" ir ištrinti iš kietiakų. Matau, kad programa veiks
lėčiau nes visi duomenys bus supilti į vieną, ir iš ten skaidomi ir trinami papildomai. Esu užtikrintas, kad programa veiks lėčiau. Be to bandžiau aš įvykdyti šią
užduotį. Bandžiau naudoti std::find , kad surasti elementą kurį reiks ištrinti ir jį idėti į vector::erase metodą, bet prorama mėtė neaiškų errorą. pridedu kodo
dalį.

vargsiukai.push_back(a);
auto it = std::find(kietiakai.begin(), kietiakai.end(),a);
kietiakai.erase(it);
