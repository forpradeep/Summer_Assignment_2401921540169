package Week_3.OOPS;
import java.util.Random;

abstract class Compartment {
    public abstract String notice();
}


class FirstClass extends Compartment {
    @Override
    public String notice() {
        return "This is First Class Compartment";
    }
}
class Ladies extends Compartment {
    @Override
    public String notice() {
        return "This is Ladies Compartment";
    }
}
class General extends Compartment {
    @Override
    public String notice() {
        return "This is General Compartment";
    }
}
class Luggage extends Compartment {
    @Override
    public String notice() {
        return "This is Luggage Compartment";
    }
}


public class TestCompartment {
    public static void main(String[] args) {
    Compartment [] comp = new Compartment[10];
    Random r = new Random();

    for (int i = 0;i<10;i++){
        int raNum = r.nextInt(4) +1;
        if(raNum == 1){
            comp[i] = new FirstClass();
        }
        else if(raNum == 2){
            comp[i] = new Ladies();
        }
        else if(raNum == 3){
            comp[i] = new General();
        }
        else{
            comp[i] = new Luggage();
        }
        System.out.println(comp[i].notice());
    }
}

}
