import java.awt.*;
import java.awt.event.*;

class shorthand
{
    public static void main(String[] args) {
        Frame fobj = new Frame("Marvellous");
        fobj.setSize(500, 500);
        fobj.setVisible(true);
        
        Button bobj = new Button("Ok");
        fobj.add(bobj);

        //Anonymus Inner class 
        bobj.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent aobj)
            {
                System.out.println("Button Pressed...");
            }
        });
        
    }
}