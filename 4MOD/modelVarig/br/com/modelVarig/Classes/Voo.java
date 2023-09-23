package br.com.modelVarig.Classes;

import java.util.ArrayList;
import java.util.Date;

public class Voo {
    int numVoo;
    Date dataPrevistaSaida;
    Aeronave aeronave;
    Aeroporto origem;
    Aeroporto destino;
    ArrayList<Reserva> reservas = new ArrayList<>();
    ArrayList<Assento> assentos = new ArrayList<>();

}
