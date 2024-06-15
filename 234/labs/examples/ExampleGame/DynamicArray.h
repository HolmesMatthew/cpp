#pragma once

template <class T>
class DynamicArray
{
public:

	// Public error code
	const int OUT_OF_BOUNDS = 1;
	
	/***** Manager Functions *****/

	// Default constructor
	DynamicArray() : m_first(nullptr), m_length(0)
	{}
	
	// Constructor that sets length of DynamicArray to "length"
	DynamicArray(int length) : m_first(nullptr), m_length(0)
	{
		if (length < 0)
			throw OUT_OF_BOUNDS;

		if (length > 0)
		{
			m_first = new T[length];
			m_length = length;
		}
	}
	
	// Copy constructor
	DynamicArray(const DynamicArray<T>& other_array) : m_first(nullptr), m_length(0)
	{
		int length = other_array.length();

		m_first = new T[length];

		for (int i = 0; i < length; ++i)
			m_first[i] = other_array.getElem(i);

		m_length = length;
	}
	
	// Destructor
	~DynamicArray()
	{
		empty();
	}

	/***** Overloaded Operators *****/

	// Copy assignment operator
	DynamicArray<T>& operator = (const DynamicArray<T>& other_array)
	{
		if (this != &other_array)
		{
			empty();

			int new_length = other_array.length();

			m_first = new T[new_length];

			for (int i = 0; i < new_length; ++i)
				m_first[i] = other_array.getElem(i);

			m_length = new_length;
		}

		return *this;
	}
	
	// Equality test operator, tests equality between each pair of corresponding elements
	bool operator == (const DynamicArray<T>& other_array)
	{
		bool equality = true;

		if (m_length == other_array.length())
			for (int i = 0; i < m_length; ++i)
				equality = equality && (m_first[i] == other_array.getElem(i));
		else
			equality = false;

		return equality;
	}

	/***** Member Functions *****/

	// Returns length (number of elements) of array
	int length() const
	{
		return m_length;
	}
	
	// Searches for element "search_elem" starting at index "start"
	// Returns index of element if found or length of this DynamicArray if not found
	int find(const T& search_elem, int start = 0) const
	{
		if (start < 0 || start >= m_length)
			throw OUT_OF_BOUNDS;

		int index = 0;

		for (index = start; index < m_length; ++index)
		{
			if (m_first[index] == search_elem)
				break;
		}

		return index;
	}
	
	// Returns value of element at index "index"
	T getElem(int index) const
	{
		if (index < 0 || index >= m_length)
			throw OUT_OF_BOUNDS;

		return m_first[index];
	}
	
	// Sets value of element at index "index"
	void setElem(int index, T new_elem)
	{
		if (index < 0 || index >= m_length)
			throw OUT_OF_BOUNDS;

		m_first[index] = new_elem;
	}
	
	// Gets sub array starting at index "start" with length "length"
	DynamicArray<T> getSub(int start, int length) const
	{
		if (start < 0 || length < 0 || start + length > m_length)
			throw OUT_OF_BOUNDS;

		DynamicArray<T> new_array(length);

		for (int i = 0; i < length; ++i)
			new_array.setElem(i, m_first[i + start]);

		return new_array;
	}
	
	// Inserts a new element "new_elem" at index "index"
	void insert(const T& new_elem, int index = 0)
	{
		if (index < 0 || index > m_length)
			throw OUT_OF_BOUNDS;

		int new_length = m_length + 1;
		T* new_first = new T[new_length];

		for (int i = 0; i < index; ++i)
			new_first[i] = m_first[i];

		new_first[index] = new_elem;

		for (int i = index + 1; i < new_length; ++i)
			new_first[i] = m_first[i - 1];

		empty();

		m_first = new_first;
		m_length = new_length;
	}
	
	// Inserts a new sub array "new_sub" at index "index"
	void insert(const DynamicArray<T>& new_sub, int index = 0)
	{
		if (index < 0 || index > m_length)
			throw OUT_OF_BOUNDS;

		int sub_length = new_sub.length();
		int new_length = m_length + sub_length;
		T* new_first = new T[new_length];

		for (int i = 0; i < index; ++i)
			new_first[i] = m_first[i];

		for (int i = index; i < index + sub_length; ++i)
			new_first[i] = new_sub.getElem(i - index);

		for (int i = index + sub_length; i < new_length; ++i)
			new_first[i] = m_first[i - sub_length];

		empty();

		m_first = new_first;
		m_length = new_length;
	}
	
	// Removes elements starting at index "start", number of elements removed is "length"
	void remove(int start, int length = 1)
	{
		if (start < 0 || length < 0 || start + length > m_length)
			throw OUT_OF_BOUNDS;

		if (start == 0 && length == m_length)
		{
			empty();
		}
		else
		{
			int new_length = m_length - length;
			T* new_first = new T[new_length];

			for (int i = 0; i < start; ++i)
				new_first[i] = m_first[i];

			for (int i = start; i < new_length; ++i)
				new_first[i] = m_first[i + length];

			empty();

			m_first = new_first;
			m_length = new_length;
		}
	}
	
	// First finds and then removes element "search_element"
	// Removes first matching element if "all" is false, removes all matching elements if "all" is true
	void findAndRemove(const T& search_elem, bool all = true)
	{
		int found;

		if (all)
		{
			while (m_length > 0)
			{
				found = find(search_elem);
				if (found < m_length)
					remove(found);
				else
					break;
			}
		}
		else
		{
			found = find(search_elem);
			if (found < m_length)
				remove(found);
		}
	}
	
	// Empties this DynamicArray
	void empty()
	{
		if (m_first != nullptr)
			delete[] m_first;

		m_first = nullptr;
		m_length = 0;
	}

private:

	/***** Data Members *****/

	// Type T pointer to first element in array
	T* m_first;

	// Length of array
	int m_length;

};