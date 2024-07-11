class DamnSeeFile {
    private:
        int cantTouchThis = 0;
        char thisIsAStringLikeThing[100];

    public:
        void damnSeeFile();

        void canWeSee(int value) {
            cantTouchThis = value;
        }
};