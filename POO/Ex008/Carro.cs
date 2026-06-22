namespace Ex008 {
    class Carro : Veiculo {

        double litro;
        public override double CalcularConsumo(double distancia) {
            return distancia / litro;
        }

    }
}
