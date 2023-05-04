# Proiectul salveaza-l pe Gebi

## Descriere

Nu fi lenes, apuca-te de treaba ca ai un job de schimbat.

In fisierul de exemple o sa gasesti exemple cu lucrurile pe care trebuie sa le inveti. Incerc sa-ti dau exemple cu chestii mai 
dubioase, multe din ele nu se folosesc, dar e bine sa stii de ele ca exista.

In principiu ca deja stii sa programezi si ai proiecte relevante, cel mai probabil nu o sa fie la fel de multa presiune pe tine sa stii tot, dar tot trebuie sa arati ca stii ceva din c++ si ca vrei sa inveti.

## Compilare 

Descarca mingw de aici
https://sourceforge.net/projects/mingw/

Instaleaza-l si dupa adauga-l in path

Pentru a compila si rula:
```
g++ <nume_fisier>
./a
```

Exemplu:
```
./"1. basic_pointers.cpp"
./a
```

## De invatat
- Memory management
  - Pointeri
  - Smart pointeri
  - Diferenta dintre malloc si new (malloc doar aloca memorie, new aloca - memorie si cheama constructorul)
- Reference (si diferente intre ele si pointeri, cand folosesti ce)
- Iteratori
- Lib standard (sa stii cateva chestii importante, e prea stufoasa)
  - std::sort
  - std::vector
  - std::set
  - std::map / std::unoredered_map (care e diferenta)
  - std::string
- OOP stuff
  - Clase (constructor / destructor(nu ai in java) / copy constructor / - move constructor etc)
  - Tipuri de overload la operatori
  - Inheritance
  - Polimorphism
  - Static polymorphism (function overload, templates)
  - Dynamic (pointer / reference)
  - Object slicing
  - Friend classes / functions
  - Rule of 5 / 7
  - Diferenta intre shallow copy si deep copy
  - Move semantics (legat de pointers and stuff)

