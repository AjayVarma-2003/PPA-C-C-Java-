import java.awt.*;
import java.awt.event.*;

class Calculator
{
    public static void main(String[] args) {
        MarvellousCalculator mobj = new MarvellousCalculator(400,400,"Caculator");
    }
}

class MarvellousCalculator extends WindowAdapter implements ActionListener
{
    public Frame fobj; 
    public Button b1 , b2 , b3 , b4;
    public TextField t1 , t2;
    public Label lobj;
    public Integer No1, No2;
    
    public MarvellousCalculator(int width , int height , String Title)
    {
        fobj = new Frame(Title);
        fobj.setSize(width, height);

        fobj.addWindowListener(this);

        b1 = new Button("Add");
        b2 = new Button("Subtract");
        b3 = new Button ("Multiply");
        b4 = new Button ("Division");
        t1 = new TextField();
        t2 = new TextField();
        lobj = new Label();

        b1.setBounds(100, 280, 80, 40);
        b2.setBounds(200, 280, 80, 40);
        b3.setBounds(300, 280, 80, 40);
        b4.setBounds(400, 280, 80, 40);
        t1.setBounds(70, 100, 100, 40);
        t2.setBounds(220, 100, 100, 40);
        lobj.setBounds(150, 25, 200, 100);

        fobj.add(b1);
        fobj.add(b2);
        fobj.add(b3);
        fobj.add(b4);
        fobj.add(t1);
        fobj.add(t2);
        fobj.add(lobj);
    
        b1.addActionListener(this);
        b2.addActionListener(this);
        b3.addActionListener(this);
        b4.addActionListener(this);


        fobj.setLayout(null);
        fobj.setVisible(true);
    }
    public void windowClosing(WindowEvent obj)    //Event handler for frame
    {
        System.exit(0);
    }
    public void actionPerformed(ActionEvent aobj)   //Event handler for buttons
    {
        try
        {
            No1 = Integer.parseInt(t1.getText());
            No2 = Integer.parseInt(t2.getText());

            if(aobj.getSource()==b1)  //Add
            {
                lobj.setText("Addition is : "+(No1+No2));

            }
            else if(aobj.getSource()==b2)  //Subtract
            {
                lobj.setText("Subtraction is : "+(No1-No2));
            }
            else if(aobj.getSource()==b3)  //Multiply
            {
                lobj.setText("Multiplication is : "+(No1*No2));
            }
            else if(aobj.getSource()==b4)  //Division
            {
                lobj.setText("Division is : "+(No1/No2));
            }
        }
        catch(Exception eobj)
        {}
    }
}