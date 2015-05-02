
#include <vector>
#include <iostream>
#include <stdio.h>

#ifndef _P_LIST_H_
#define _P_LIST_H_

namespace HB_SHR {

    template <typename T>
    class PList {
        private:
            std::vector < T > * l1;
            std::vector < void * > * l2;

            int find(T);
            int size;

        public:
            PList();
            //setter - has bug
            int& operator [] (T in){
                std::cout << "setter" << std::endl;
                int a = 90;
                return a;
            }
            //getter - has bug
            int operator [] (T in) const {
                std::cout << "getter" << std::endl;
                return 1;
            }

            //---------------------------------------------
            PList<T>& operator = (char);
            PList<T>& operator = (const char *);
            PList<T>& operator = (char *);
            PList<T>& operator = (short);
            PList<T>& operator = (int);
            PList<T>& operator = (long);
            PList<T>& operator = (double);
            PList<T>& operator = (float);
            PList<T>& operator = (bool);
            PList<T>& operator = (void *);
            PList<T>& operator = (std::string &);

            bool set_item_at(unsigned int, void *);
            bool set_item_at(unsigned int, char *);
            bool set_item_at(unsigned int, const char *);
            bool set_item_at(unsigned int, char);
            bool set_item_at(unsigned int, short);
            bool set_item_at(unsigned int, int);
            bool set_item_at(unsigned int, long);
            bool set_item_at(unsigned int, double);
            bool set_item_at(unsigned int, float);
            bool set_item_at(unsigned int, bool);
            bool set_item_at(unsigned int, std::string &);
            //---------------------------------------------

            void set(T, char);
            void set(T, const char *);
            void set(T, char *);
            void set(T, short);
            void set(T, int);
            void set(T, long);
            void set(T, double);
            void set(T, float);
            void set(T, bool);
            void set(T, void *);
            void set(T, std::string &);

            char    get_char(T);
            const char * get_const_char(T);
            char *  get_char_star(T);
            short   get_short(T);
            int     get_int(T);
            long    get_long(T);
            double  get_double(T);
            float   get_float(T);
            bool    get_bool(T);
            void *  get_void(T);
            std::string & get_string(T);

            unsigned int get_size();
            void clear();

            ~PList();
    };
}

#endif
