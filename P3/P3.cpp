#include "Alumno3.h"

using namespace std;

vector<string> split(string line, char separator)
{
    vector<string> words;
    string word;
    for (auto x : line)
    {
        if (x != separator)
            word += x;
        else
        {
            words.push_back(word);
            word = "";
        }
    }
    words.push_back(word);
    return words;
}

class VariableRecord
{
    string nombre;

public:
    explicit VariableRecord(string _nombre) : nombre(_nombre) {}

    vector<Alumno3> load()
    {
        fstream file;
        file.open(nombre + ".txt");
        string texto;

        vector<Alumno3> v;

        bool key = true;
        while (getline(file, texto))
        {
            if (key)
            {
                key = false;
                continue;
            }
            Alumno3 alumno{};
            vector<string> words = split(texto, '|');
            alumno.Nombre = words[0];
            alumno.Apellidos = words[1];
            alumno.Carrera = words[2];
            alumno.mensualidad = stof(words[3]);
            v.push_back(alumno);
        }
        return v;
    }

    void add(Alumno3 record)
    {
        ofstream file;
        file.open(nombre + ".txt", ios::app);
        string cadena = record.Nombre + "|" + record.Apellidos + "|" + record.Carrera + "|" + to_string(record.mensualidad) + "\n";
        file << cadena;
        file.close();
    }

    Alumno3 readRecord(int pos)
    {
        vector<Alumno3> show =load();
        return show[pos];
    }

    void Test()
    {
        auto v = load();
        for (auto x : v)
        {
            cout << x;
        }

        cout << "Añadiendo un Alumno:" << endl;
        Alumno3 a3{};
        a3.Nombre = "Jorge";
        a3.Apellidos = "Castillo Aliaga";
        a3.Carrera = "Computer Science";
        a3.mensualidad = 10;

        add(a3);
        v = load();
        auto a = readRecord(v.size()-1);
        cout << a;
    }
};