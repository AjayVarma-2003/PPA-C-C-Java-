import java.awt.*;
import java.awt.event.*;

class MarvellousFrame
{
    public Frame fobj;
    public MarvellousFrame (String title)
    {
        fobj = new Frame(title);
        fobj.setSize(400,400);
        fobj.setVisible(true);
        fobj.addWindowListener(new MarvellousListner());
    }
}

class MarvellousListner implements WindowListener
{
    public void windowActivated(WindowEvent obj){}
    public void windowDeactivated(WindowEvent obj){}
    public void windowIconfied(WindowEvent obj){}
    public void windowDeiconified(WindowEvent obj){}
    public void windowClosed(WindowEvent obj){}
    public void windowOpened(WindowEvent obj){}
    public void windowClosing(WindowEvent obj)
    {
        System.exit(0);
    }
}

class GUI4
{
    public static void main(String[] args) {
     MarvellousFrame mobj = new MarvellousFrame("PPA");   
    }
}
