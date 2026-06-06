package Week_1.OOPS;

public interface INTERFACE_LIB_USER {
    public void registerAccount();
    public void requestBook();
}

class kidUser implements INTERFACE_LIB_USER{
    private int age;

    public void setage(int age) {
        this.age = age;
    }
    private String bookType;

    public void setbookType(String bookType){
        this.bookType = bookType;
    }

    @Override
    public void registerAccount(){
        if(age<12){
            System.out.println("You have successfully registered under a Kids Account");
        }
        else{
            System.out.println("Sorry, Age must be less than 12 to register as a kid");
        }
    }
    @Override
    public void requestBook(){
        if(bookType.equals("Kids")){
            System.out.println("Book Issued successfully, please return the book within 10 days");
        }
        else{
            System.out.println("Oops, you are allowed to take only kids books");
        }
    }

}

class Adultuser implements INTERFACE_LIB_USER{
    private int age;

    public void setAge(int age) {
        this.age = age;
    }
    private String bookType;

    public void setbookType(String bookType){
        this.bookType = bookType;
    }

    @Override
    public void registerAccount(){
        if(age>=12){
            System.out.println("You have successfully registered under an Adult Account");
        }
        else{
            System.out.println("Sorry, Age must be greater than 12 to register as an adult");
        }
    }
    @Override
    public void requestBook(){
        if(bookType.equals("Fiction")){
            System.out.println( "Book Issued successfully, please return the book within 7 days" );
        }
        else{
            System.out.println("Oops, you are allowed to take only adult Fiction books");
        }
    }

}
