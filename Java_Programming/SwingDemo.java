import javax.swing.*;

class MarvellousFrame
{
    public JFrame fobj;
    
    public MarvellousFrame(String Title)
    {
        JFrame fobj = new JFrame(Title);
        fobj.setSize(400,400);
        fobj.setVisible(true);
    }
}

class SwingDemo
{
    public static void main(String[] args) {
        MarvellousFrame mobj = new MarvellousFrame("PPA");
    }
}

/*
    Frame JFrame
    Button JButton 
    Label JLabel 
    TextField JTextField
 */