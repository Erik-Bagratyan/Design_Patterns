#ifndef SINGLETONE_HPP
#define SINGLETONE_HPP

class Singletone
{
public:
	Singletone(const Singletone&)		= delete;
	Singletone& operator=(Singletone&)	= delete;

	static Singletone* get_instance();

private:
	Singletone() = default;

private:
	static Singletone* instance;


};

#endif // SINGLETONE_HPP
