public class Book {
    private String isbn;
    private String title;
    private boolean isAvailable;

    public Book(String isbn, String title) {
        this.isbn = isbn;
        this.title = title;
        this.isAvailable = true;
    }

    public void checkOut() {
        if (isAvailable) {
            this.isAvailable = false;
        } else {
            System.out.println("Book is already issued.");
        }
    }
}