import java.util.*; // baseline library
class gr { // Class declaration
	private static float len; // private variable defined(sequence length);
	private static float polar; // " (number of polar amino acids);
	private static float npolar; // " (number of non-polar amino acids);
	private static void pp(String x) { // private method declaration(pp);
		System.out.println(x); // method task
	}
	private static String sv(float x) { // Private Method declaration
		return String.valueOf(x); // Function returned value
	}
	public static void pc(String x) { // Another method
		len = x.length();
		char pa[] = {'Q','N','H','S','T','Y','C','W'}; // array of polar amino acids
		char aa[] = x.toCharArray(); // Convert string to char array
		int z = 0; // simple counter
		for(int c = 0; c<= aa.length - 1; c++) { // Loop to iterate over char array
			if(aa[c] == pa[0]) { // conditional statement
				z++; // Incrementing counter
			} // End of conditional statement
		} // end of iteration
		int za = 0; // Simple counter
		for(int c = 0; c<= aa.length - 1;c++) { // Iteration over char array
			if(aa[c] == pa[1]) { // Conditional statement
				za++; // Incrementing counter
			} // "
		} // "
		int zb = 0; // Simple counter
		for(int c = 0;c<=aa.length -1;c++) { // Iteration over char array
			if(aa[c] == pa[2]) { // Conditional statement
				zb++; // incrementing counter
			}
		}
		int zc = 0; // Counter
		for(int c = 0;c<= aa.length - 1;c++) { // Iteration
			if(aa[c] == pa[3]) { // Condition
				zc++; // increment
			} // "
		} // "
		int zd = 0; // "
		for(int c = 0;c<= aa.length -1;c++) { // "
			if(aa[c] == pa[4]) { // "
				zd++; // "
			} // "
		} // "
		int ze =0; // "
		for(int c = 0;c<= aa.length -1;c++) { // "
			if(aa[c] == pa[5]) { // "
				ze++; // "
			} // "
		} // "
		int zf = 0; // "
		for(int c = 0;c<= aa.length -1;c++) { // "
			if(aa[c] == pa[5]) { // "
				zf++; // "
			} // End of conditional statement
		} // End of iteration
		int zg = 0; // "
		for(int c = 0;c<= aa.length -1;c++) { // "
			if(aa[c] == pa[6]) { // "
				zg++; // "
			} // End of conditional statement
		} // End of iteration
		float vg = (zg/len)*100; // float type variable declaration
		float vf = (zf/len)*100; // "
		float ve = (ze/len)*100; // "
		float vd = (zd/len)*100; // "
		float vc = (zc/len)*100; // "
		float vb = (zb/len)*100; // " 
		float va = (z/len)*100; // "
		float vi = (za/len) *100; // "
		pp("Q ->" + sv(va) + "%"); // Output
		pp("N -> " + sv(vi) + "%"); // Output
		pp("H ->" + sv(vb) + "%"); // Output
		pp("S ->"+ sv(vc)+ "%"); // Output
		pp("T ->"+sv(vd) + "%"); // Output
		pp("Y ->"+sv(ve) + "%"); // Output
		pp("C ->" + sv(vf) + "%"); // Output
		pp("W ->"+ sv(vg) + "%"); // Output
		ArrayList<Float> ed = new ArrayList<Float>(); // ArrayList Declaration
		ed.add((va)); // Adding elements to the ArrayList
		ed.add((vi)); // "
		ed.add((vb)); // "
		ed.add((vc)); // "
		ed.add((vd)); // "
		ed.add((ve)); // "
		ed.add((vf)); // "
		ed.add((vg)); // "
		polar = 0; // polar special declared
		for(float d : ed) { // iteration
			polar += d; // summation
		} // end of loop
		pp("Polar(%)-> "+sv(polar) +"%"); // Output
	} // End of pc method
	public static void cc() { // Another method
		Scanner ll = new Scanner(System.in); // New instance of Scanner class declared
		String x = ll.nextLine(); // use of new instance
		ll.close(); // Closing Scanner
		len = x.length(); // attributing length
		String seq[] = x.split(""); // splitting input sequence
		for(int a = 0;a<= seq.length - 1;a++) { // iteration
			pp("Index["+a+"] -> "+seq[a]); // iteration
		} // end of loop
		pp(sv(len) + " Bp"); // output
		pc(x); // Calling pc method
	} // End of cc method
} // End of class gr
public class Ball { // Main class defined(Ball)
	private static void ll(String x) { // Method declaration
		System.out.println(x); // output
	} // End of method(ll);
	public static void main(String[] args) { // Main method defined
		ll("Enter Something:"); // method calling
		gr ab = new gr(); // New instance of gr class
		ab.cc(); // calling method of the gr class 
	} // end of main method
} // End of main class