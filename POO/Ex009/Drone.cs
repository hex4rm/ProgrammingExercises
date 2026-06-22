namespace Ex009 {
    class Drone : ILigavel {
        bool Estado;

        public void ligar() {
            Estado = true;
            Console.WriteLine("inicia hélices e exibe “Drone iniciando voo");
        }
        public void desligar() {
            Estado = false;
            Console.WriteLine("Drone pousando e desligando motores");

        }
    }
}
