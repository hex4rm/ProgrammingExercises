namespace Ex009 {
    class Cafeteira : ILigavel {

        bool Estado;
        public void ligar() {
            if (Estado == true) {
                Console.WriteLine("Cafeteira está ligada.");
            }
            else {
                Estado = true;
                Console.WriteLine("Aquecendo água para café");
            }
        }

        public void desligar() {
            if (Estado == true) {
                Estado = false;
                Console.WriteLine("Cafeteira desligada");
            }
            else {
                Console.WriteLine("Cafeteira está desligada");
            }
        }
    }
}
