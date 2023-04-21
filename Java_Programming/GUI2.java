import java.awt.*;

class MarvellousFrame
{
    public Frame fobj;
    
    public MarvellousFrame(String Title)
    {
        Frame fobj = new Frame(Title);
        fobj.setSize(400,400);
        fobj.setVisible(true);
    }
}

class GUI2
{
    public static void main(String[] args) {
        MarvellousFrame mobj = new MarvellousFrame("PPA");
    }
}