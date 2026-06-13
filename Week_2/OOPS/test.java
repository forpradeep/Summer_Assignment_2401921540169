package Week_2.OOPS;
import  music.playbale;
import music.string.Veena;
import music.wind.saxophone;
package live;
public class test {
    public static void main(String[] args) {
        playable v = new Veena();
        playable s = new saxophone();
        v.play();
        s.play();
    }
}
