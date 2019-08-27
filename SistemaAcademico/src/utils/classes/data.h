
#ifndef DATA_H_
#define DATA_H_

class Data {
    
    private:
        int dia;
        int mes;
        int ano;

    public:
        Data(int dia, int mes, int ano);
        Data();
        ~Data();

        void init(int dia=0, int mes=0, int ano=0);

        int getDia();
        void setDia(int dia);
        int getMes();
        void setMes(int mes);
        int getAno();
        void setAno(int ano);

};

#endif
