#include "plist.h"
namespace HB_SHR {

    template <typename T>
    PList <T>::~PList()
    {
        delete l1;
        delete l2;
    }

    template <typename T>
    PList <T>::PList() : size(0)
    {
        l1 = new std::vector < T > ();
        l2 = new std::vector < void * > ();
    }

    template <typename T>
    unsigned int PList<T>::get_size()
    {
        return size;
    }

    template <typename T>
    void PList<T>::clear()
    {
        l1->clear();
        for (int i = 0 ; i < l2->size(); ++i){
            delete l2[i];
        }
        l2->clear();
    }

    template <typename T>
    int PList<T>::find(T t)
    {
        for (int i = 0; i < size; ++i)
        {
            if (l1->at(i) == t)
            {
                return i;
            }
        }
        return -1;
    }
	//---------------- CHAR ------------------
    template <typename T>
    void PList<T>::set(T t, char c)
    {
        int index = find(t);
		char * tmp = new char();
		*tmp = c;
        if (index == -1)
        {
            ++size;
            l1->push_back(t);
            l2->push_back((void *) tmp);
        }
        else
        {
            delete l2->at(index);
            l2->at(index) = (void *) tmp;
        }
    }

    template <typename T>
    char PList<T>::get_char(T t)
    {
        int index = find(t);
        if (index == -1)
        {
            return NULL;
        }
        else
        {
			return *((char *) l2->at(index));	
        }
    }
	//---------------- CHAR * ------------------
	template <typename T>
	void PList<T>::set(T t, char *c)
	{
		int index = find(t);
		if (index == -1)
		{
			++size;
			l1->push_back(t);
			l2->push_back((void *) c);
		}
		else
		{
			delete l2->at(index);
			l2->at(index) = (void *) c;
		}
	}

	template <typename T>
	char * PList<T>::get_char_star(T t)
	{
		int index = find(t);
		if (index == -1)
		{
			return NULL;
		}
		else
		{
			return (char *)l2->at(index);
		}
	}
	//---------------- CONST CHAR * ------------------
	template <typename T>
	void PList<T>::set(T t, const char *c)
	{
		int index = find(t);
		if (index == -1)
		{
			++size;
			l1->push_back(t);
			l2->push_back((void *) c);
		}
		else
		{
			delete l2->at(index);
			l2->at(index) = (void *) c;
		}
	}

	template <typename T>
	const char * PList<T>::get_const_char(T t)
	{
		int index = find(t);
		if (index == -1)
		{
			return NULL;
		}
		else
		{
			return (const char *)l2->at(index);
		}
	}
	//---------------- SHORT ------------------
	template <typename T>
	void PList<T>::set(T t, short c)
	{
		int index = find(t);
		short * tmp = new short();
		*tmp = c;
		if (index == -1)
		{
			++size;
			l1->push_back(t);
			l2->push_back((void *) tmp);
		}
		else
		{
			delete l2->at(index);
			l2->at(index) = (void *) tmp;
		}
	}

	template <typename T>
	short PList<T>::get_short(T t)
	{
		int index = find(t);
		if (index == -1)
		{
			return NULL;
		}
		else
		{
			return *((short *)l2->at(index));
		}
	}
	//---------------- INT ------------------
	template <typename T>
	void PList<T>::set(T t, int c)
	{
		int index = find(t);
		int * tmp = new int();
		*tmp = c;
		if (index == -1)
		{
			++size;
			l1->push_back(t);
			l2->push_back((void *)tmp);
		}
		else
		{
			delete l2->at(index);
			l2->at(index) = (void *)tmp;
		}
	}

	template <typename T>
	int PList<T>::get_int(T t)
	{
		int index = find(t);
		if (index == -1)
		{
			return NULL;
		}
		else
		{
			return *((int *)l2->at(index));
		}
	}
	//----------------  ------------------

}
