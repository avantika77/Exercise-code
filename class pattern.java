
class pattern 
{
    /**
     * @param s
     */
    void main (String s)
    {
        {
            System.out.print(s);
            int n=s.length();
            for (int i=0; i<n; i++)
            {
                s=s.substring (1)+s.charAt(0);
                System.out.println(s);
            }
        }
    }
}