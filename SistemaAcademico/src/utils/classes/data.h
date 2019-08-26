
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

        void init(int dia=-1, int mes=-1, int ano=-1);

        int getDia();
        void setDia(int dia);
        int getMes();
        void setMes(int mes);
        int getAno();
        void setAno(int ano);

};

#endif
