template<typename T>
Array<T>::Array():
		tab(NULL), sz(0)
{
}

template<typename T>
Array<T>::Array(unsigned int n):
		sz(n)
{
	this->tab = new T[n];
}

template<typename T>
Array<T>::Array(Array &other):
		tab(NULL), sz(0)
{
	this->sz = other.sz;
	if (other.sz > 0)
	{
		this->tab = new T[other.sz];
		for (unsigned int i = 0; i < other.sz; i++)
			this->tab[i] = other.tab[i];
	}
}

template<typename T>
Array<T> &Array<T>::operator=(Array &other)
{
	if (sz > 0)
		delete[] this->tab;
	this->sz = other.sz;
	if (other.sz > 0)
	{
		this->tab = new T[other.sz];
		for (unsigned int i = 0; i < other.sz; i++)
			this->tab[i] = other.tab[i];
	}
	return (*this);
}

template<typename T>
Array<T>::~Array()
{
	if (sz > 0)
		delete[] this->tab;
}

template<typename T>
const char *Array<T>::OutOfLimitsException::what() const throw()
{
	return ("ERROR: Index out of limits");
}

template<typename T>
int Array<T>::size()
{
	return (this->sz);
}

template<typename T>
T &Array<T>::operator[](unsigned int i)
{
	if (i >= this->sz)
		throw (Array::OutOfLimitsException());
	else
		return (this->tab[i]);
}
