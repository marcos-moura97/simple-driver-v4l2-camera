#ifndef CAPTURE_V4L2_HPP_
#define CAPTURE_V4L2_HPP_

/*
* Camera device using Video4Linux2
*/

class CaptureV4L2
{
    public:
      explicit CaptureV4L2(std::string device, int shift);
        void run();

    private:

        // image buffer variable    
        struct Buffer
        {
            unsigned index;
            unsigned char * start;
            size_t length;
        };

        Buffer buffer_;

        int fd_;
        int shift_;

        // functions
        int open_camera(std::string device);
        int print_caps();
        int init_mmap();
        int capture_image();
        int process_buffer(const void *p);
        int save_img();
        void close_camera();

};


#endif //CAPTURE_V4L2_HPP_