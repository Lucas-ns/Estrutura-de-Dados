int anoBissexto(int ano) {
    if (ano % 4 == 0)
    {
        return printf("O ano é bissexto!\n");
    }
    else
    {
        return printf("O ano não é bissexto!\n");
    }
}

int quantosAnosBissextos(){
    int qtdAnos = 0;
    for (int i = 1; i <= 2010; i++)
    {
        if (i % 4 == 0)
        {
            qtdAnos += 1;
        }   
    }
    return printf("Desde o ano 1 até 2010 foram %d\n", qtdAnos);
}

int main() {
    anoBissexto(2004);
    quantosAnosBissextos();
}