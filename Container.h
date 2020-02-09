class Container {
public:
	virtual void insert(const std::string& entry) = 0;
	virtual void remove() = 0;
	virtual  void print(std::ostream&) = 0;
};