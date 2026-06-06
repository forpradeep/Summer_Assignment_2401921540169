package Week_1.OOPS;

public class LibraryInterfaceDemo {

	public static void main(String[] args) {
        kidUser kid = new kidUser();
        kid.setage(9);
        kid.setbookType("Kids");
        kid.registerAccount();
        kid.requestBook();
        System.out.println();

        Adultuser adult = new Adultuser();
        adult.setAge(23);
        adult.setbookType("Fiction");
        adult.registerAccount();
        adult.requestBook();
    }
}
