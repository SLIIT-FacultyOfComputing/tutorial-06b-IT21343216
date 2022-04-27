class Box {
    private:
       int Length;
       int Width;
       int Height;
    public:
      void setLength(int L);
      void setWidth(int W);
      void setHeight(int H);
       // write prototypes of setters for length, width and height
      int getLength();
      int getWidth();
      int getHeight();
       // write prototypes of getters for length, width and height
 
       int calcVolume();
};
